#include "util.hpp"
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>

std::vector<cv::Point> as_points(Rcpp::List pts){
  std::vector<cv::Point> points;
  std::vector<int> x = Rcpp::as<std::vector<int>>(pts["x"]);
  std::vector<int> y = Rcpp::as<std::vector<int>>(pts["y"]);
  for (size_t i = 0; i < x.size(); ++i){
    cv::Point2i pt(x[i], y[i]);
    points.push_back(pt);
  }
  return points;
}

// [[Rcpp::export]]
XPtrMat cvmat_rect(XPtrMat ptr, int x = 0, int y = 0, int width = 0, int height = 0){
  cv::Mat img = get_mat(ptr);
  cv::Rect roi = cv::Rect(x, y, width, height);
  cv::Mat output = img(roi);
  return cvmat_xptr(output);
}

// [[Rcpp::export]]
XPtrMat cvmat_bbox(XPtrMat ptr){
  cv::Mat img = get_mat(ptr);
  cv::Rect roi = cv::boundingRect(img);
  cv::Mat output = img(roi);
  return cvmat_xptr(output);
}

// [[Rcpp::export]]
XPtrMat cvpoints_bbox(XPtrMat ptr, Rcpp::List pts){
  cv::Mat img = get_mat(ptr);
  auto points = as_points(pts);
  cv::Rect roi = cv::boundingRect(points);
  cv::Mat output = img(roi);
  return cvmat_xptr(output);
}


// [[Rcpp::export]]
XPtrMat cvmat_polygon(XPtrMat ptr, Rcpp::List pts, bool crop = false, int color = 255){
  auto points = as_points(pts);
  cv::Mat img = get_mat(ptr);
  cv::Mat mask = cv::Mat::zeros(img.rows, img.cols, CV_8U);
  cv::fillConvexPoly(mask, points, cv::Scalar(255));
  cv::Mat area(img.rows, img.cols, img.type());
  area.setTo(cv::Scalar(color, color, color));
  img.copyTo(area, mask);
  if(crop){
    cv::Rect roi = cv::boundingRect(points);
    return cvmat_xptr(area(roi));
  }
  return cvmat_xptr(area);
}

