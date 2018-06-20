#ifndef DJR_FUNCTIONS_H
#define DJR_FUNCTIONS_H
#include "opencv2/opencv.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "iostream"
#include "pdi_functions.h"
#include "opencv2/video/tracking.hpp"

// Concatena imagenes horizontalmente resultando en un canal
cv::Mat concatenar_h_gray(std::vector<cv::Mat> imagenes);

// Concatena imagenes verticalmente resultando en un canal
cv::Mat concatenar_v_gray(std::vector<cv::Mat> imagenes);

// Concatena imagenes horizontalmente resultando en tres canales
cv::Mat concatenar_h_color(std::vector<cv::Mat> imagenes);

// Concatena imagenes verticalmente resultando en tres canales
cv::Mat concatenar_v_color(std::vector<cv::Mat> imagenes);

// Ajusta el rango de valores entre 0 y 255
int ajuste(int intensidad);

// Transformacion de potencia
cv::Mat transformacion_potencia(cv::Mat lut_table,float c,float gamma);

// Transformacion logaritmica
cv::Mat transformacion_logaritmica(cv::Mat lut_table,float c);

// Combinacion de transformacion de potencia y logaritmica
cv::Mat pot_raiz(cv::Mat lut_table,const float &gamma_pot,const float &gamma_raiz,const float &n_t);

// Promedios de intensidad horizontales
cv::Mat promedio_intensidad_h(const cv::Mat &imagen);

// Promedios de intensidad verticales
cv::Mat promedio_intensidad_v(const cv::Mat &imagen);

// Promedio de intensidad de la imagen
int promedio_intensidad(const cv::Mat &imagen);

// Binariza una imagen
cv::Mat umbral(const cv::Mat &imagen,const int &nivel_transicion);

// Kernel pasa bajo
cv::Mat filtro_pb(const int &filas,const int &columnas);

// Kernel pasa alto suma cero o uno
cv::Mat filtro_pa(const int &filas,const int &columnas,const int &suma);

// Resta imagen2 a imagen1
cv::Mat resta(cv::Mat imagen1,cv::Mat imagen2);

// Filtrado de mascara difusa
cv::Mat mascara_difusa(const cv::Mat &imagen,const cv::Mat &kernel_pb);

// Suma dos imagenes
cv::Mat suma(cv::Mat imagen1,cv::Mat imagen2,float alfa);

// Kernel gaussiano cuadrado
cv::Mat gauss_kernel(const int &dimension,const float &stdev);

#endif
