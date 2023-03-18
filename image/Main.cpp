#include <opencv2/opencv.hpp>
#include <iostream>
#include "branch.h"
#include "utility.h"

using namespace cv;
using namespace std;

int main()
{
    // Cria uma imagem preta de tamanho 500x500
    Mat image = Mat::zeros(800, 800, CV_8UC3);

    // Define o centro do círculo como (250, 250) e o raio como 100
    Point center = Point(400, 400);

    for (int i = 0; i < 360; i++) {
        Branch galho = Branch(center, i, Utility::toRad(i));
        galho.drawOnImage(image);
    }

    // Mostra a imagem na tela
    imshow("Círculo", image);

    // Aguarda a tecla 'Esc' ser pressionada para fechar a janela
    while (waitKey(0) != 27);

    return 0;
}
