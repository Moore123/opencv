// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "opencv_types.h"
#include <Rcpp.h>

using namespace Rcpp;

// cvmat_dead
bool cvmat_dead(XPtrMat image);
RcppExport SEXP _opencv_cvmat_dead(SEXP imageSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrMat >::type image(imageSEXP);
    rcpp_result_gen = Rcpp::wrap(cvmat_dead(image));
    return rcpp_result_gen;
END_RCPP
}
// cvmat_size
int cvmat_size(XPtrMat image);
RcppExport SEXP _opencv_cvmat_size(SEXP imageSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrMat >::type image(imageSEXP);
    rcpp_result_gen = Rcpp::wrap(cvmat_size(image));
    return rcpp_result_gen;
END_RCPP
}
// cvmat_new
XPtrMat cvmat_new();
RcppExport SEXP _opencv_cvmat_new() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(cvmat_new());
    return rcpp_result_gen;
END_RCPP
}
// cvmat_dupe
XPtrMat cvmat_dupe(XPtrMat image);
RcppExport SEXP _opencv_cvmat_dupe(SEXP imageSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrMat >::type image(imageSEXP);
    rcpp_result_gen = Rcpp::wrap(cvmat_dupe(image));
    return rcpp_result_gen;
END_RCPP
}
// cvmat_read
XPtrMat cvmat_read(Rcpp::String path);
RcppExport SEXP _opencv_cvmat_read(SEXP pathSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::String >::type path(pathSEXP);
    rcpp_result_gen = Rcpp::wrap(cvmat_read(path));
    return rcpp_result_gen;
END_RCPP
}
// cvmat_camera
XPtrMat cvmat_camera();
RcppExport SEXP _opencv_cvmat_camera() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(cvmat_camera());
    return rcpp_result_gen;
END_RCPP
}
// cvmat_write
std::string cvmat_write(XPtrMat image, std::string path);
RcppExport SEXP _opencv_cvmat_write(SEXP imageSEXP, SEXP pathSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrMat >::type image(imageSEXP);
    Rcpp::traits::input_parameter< std::string >::type path(pathSEXP);
    rcpp_result_gen = Rcpp::wrap(cvmat_write(image, path));
    return rcpp_result_gen;
END_RCPP
}
// cvmat_resize
XPtrMat cvmat_resize(XPtrMat ptr, int width, int height);
RcppExport SEXP _opencv_cvmat_resize(SEXP ptrSEXP, SEXP widthSEXP, SEXP heightSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrMat >::type ptr(ptrSEXP);
    Rcpp::traits::input_parameter< int >::type width(widthSEXP);
    Rcpp::traits::input_parameter< int >::type height(heightSEXP);
    rcpp_result_gen = Rcpp::wrap(cvmat_resize(ptr, width, height));
    return rcpp_result_gen;
END_RCPP
}
// cvmat_bitmap
Rcpp::RawVector cvmat_bitmap(XPtrMat ptr);
RcppExport SEXP _opencv_cvmat_bitmap(SEXP ptrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrMat >::type ptr(ptrSEXP);
    rcpp_result_gen = Rcpp::wrap(cvmat_bitmap(ptr));
    return rcpp_result_gen;
END_RCPP
}
// cvmat_copyto
XPtrMat cvmat_copyto(XPtrMat from, XPtrMat to, XPtrMat mask);
RcppExport SEXP _opencv_cvmat_copyto(SEXP fromSEXP, SEXP toSEXP, SEXP maskSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrMat >::type from(fromSEXP);
    Rcpp::traits::input_parameter< XPtrMat >::type to(toSEXP);
    Rcpp::traits::input_parameter< XPtrMat >::type mask(maskSEXP);
    rcpp_result_gen = Rcpp::wrap(cvmat_copyto(from, to, mask));
    return rcpp_result_gen;
END_RCPP
}
// livestream
void livestream(Rcpp::Function filter);
RcppExport SEXP _opencv_livestream(SEXP filterSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::Function >::type filter(filterSEXP);
    livestream(filter);
    return R_NilValue;
END_RCPP
}
// cvmat_blur
XPtrMat cvmat_blur(XPtrMat ptr, size_t ksize);
RcppExport SEXP _opencv_cvmat_blur(SEXP ptrSEXP, SEXP ksizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrMat >::type ptr(ptrSEXP);
    Rcpp::traits::input_parameter< size_t >::type ksize(ksizeSEXP);
    rcpp_result_gen = Rcpp::wrap(cvmat_blur(ptr, ksize));
    return rcpp_result_gen;
END_RCPP
}
// cvmat_face
XPtrMat cvmat_face(XPtrMat ptr);
RcppExport SEXP _opencv_cvmat_face(SEXP ptrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrMat >::type ptr(ptrSEXP);
    rcpp_result_gen = Rcpp::wrap(cvmat_face(ptr));
    return rcpp_result_gen;
END_RCPP
}
// cvmat_facemask
XPtrMat cvmat_facemask(XPtrMat ptr);
RcppExport SEXP _opencv_cvmat_facemask(SEXP ptrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrMat >::type ptr(ptrSEXP);
    rcpp_result_gen = Rcpp::wrap(cvmat_facemask(ptr));
    return rcpp_result_gen;
END_RCPP
}
// cvmat_mog2
XPtrMat cvmat_mog2(XPtrMat ptr);
RcppExport SEXP _opencv_cvmat_mog2(SEXP ptrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrMat >::type ptr(ptrSEXP);
    rcpp_result_gen = Rcpp::wrap(cvmat_mog2(ptr));
    return rcpp_result_gen;
END_RCPP
}
// cvmat_knn
XPtrMat cvmat_knn(XPtrMat ptr);
RcppExport SEXP _opencv_cvmat_knn(SEXP ptrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrMat >::type ptr(ptrSEXP);
    rcpp_result_gen = Rcpp::wrap(cvmat_knn(ptr));
    return rcpp_result_gen;
END_RCPP
}
// cvmat_edges
XPtrMat cvmat_edges(XPtrMat ptr);
RcppExport SEXP _opencv_cvmat_edges(SEXP ptrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrMat >::type ptr(ptrSEXP);
    rcpp_result_gen = Rcpp::wrap(cvmat_edges(ptr));
    return rcpp_result_gen;
END_RCPP
}
// cvmat_hog
XPtrMat cvmat_hog(XPtrMat ptr);
RcppExport SEXP _opencv_cvmat_hog(SEXP ptrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrMat >::type ptr(ptrSEXP);
    rcpp_result_gen = Rcpp::wrap(cvmat_hog(ptr));
    return rcpp_result_gen;
END_RCPP
}
// cvmat_markers
XPtrMat cvmat_markers(XPtrMat ptr);
RcppExport SEXP _opencv_cvmat_markers(SEXP ptrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrMat >::type ptr(ptrSEXP);
    rcpp_result_gen = Rcpp::wrap(cvmat_markers(ptr));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_opencv_cvmat_dead", (DL_FUNC) &_opencv_cvmat_dead, 1},
    {"_opencv_cvmat_size", (DL_FUNC) &_opencv_cvmat_size, 1},
    {"_opencv_cvmat_new", (DL_FUNC) &_opencv_cvmat_new, 0},
    {"_opencv_cvmat_dupe", (DL_FUNC) &_opencv_cvmat_dupe, 1},
    {"_opencv_cvmat_read", (DL_FUNC) &_opencv_cvmat_read, 1},
    {"_opencv_cvmat_camera", (DL_FUNC) &_opencv_cvmat_camera, 0},
    {"_opencv_cvmat_write", (DL_FUNC) &_opencv_cvmat_write, 2},
    {"_opencv_cvmat_resize", (DL_FUNC) &_opencv_cvmat_resize, 3},
    {"_opencv_cvmat_bitmap", (DL_FUNC) &_opencv_cvmat_bitmap, 1},
    {"_opencv_cvmat_copyto", (DL_FUNC) &_opencv_cvmat_copyto, 3},
    {"_opencv_livestream", (DL_FUNC) &_opencv_livestream, 1},
    {"_opencv_cvmat_blur", (DL_FUNC) &_opencv_cvmat_blur, 2},
    {"_opencv_cvmat_face", (DL_FUNC) &_opencv_cvmat_face, 1},
    {"_opencv_cvmat_facemask", (DL_FUNC) &_opencv_cvmat_facemask, 1},
    {"_opencv_cvmat_mog2", (DL_FUNC) &_opencv_cvmat_mog2, 1},
    {"_opencv_cvmat_knn", (DL_FUNC) &_opencv_cvmat_knn, 1},
    {"_opencv_cvmat_edges", (DL_FUNC) &_opencv_cvmat_edges, 1},
    {"_opencv_cvmat_hog", (DL_FUNC) &_opencv_cvmat_hog, 1},
    {"_opencv_cvmat_markers", (DL_FUNC) &_opencv_cvmat_markers, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_opencv(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
