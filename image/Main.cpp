#include <opencv2/opencv.hpp>
#include <iostream>
#include "branch.h"
#include "utility.h"
#include "tree.h"

using namespace cv;
using namespace std;

int main()
{
    // Cria uma imagem preta de tamanho 500x500
    Mat image = Mat::zeros(500, 500, CV_8UC3);

    Tree::drawTree(image, Point2f(250, 500), 100, Utility::toRad(90));

    // Mostra a imagem na tela
    imshow("Círculo", image);

    // Aguarda a tecla 'Esc' ser pressionada para fechar a janela
    while (waitKey(0) != 27);

    return 0;
}
