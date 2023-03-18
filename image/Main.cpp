#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main()
{
    // Cria uma imagem preta de tamanho 500x500
    Mat image = Mat::zeros(500, 500, CV_8UC3);

    // Define o centro do círculo como (250, 250) e o raio como 100
    Point center = Point(250, 250);
    int radius = 100;

    // Desenha o círculo na imagem
    circle(image, center, radius, Scalar(255, 255, 255), 3, LINE_AA);

    // Mostra a imagem na tela
    imshow("Círculo", image);

    // Aguarda a tecla 'Esc' ser pressionada para fechar a janela
    while (waitKey(0) != 27);

    return 0;
}
