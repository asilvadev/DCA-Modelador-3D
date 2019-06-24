#ifndef PLOTTERMATRIZ_H
#define PLOTTERMATRIZ_H
#include <QWidget>
#include <QAction>
#include <QColor>
#include <QTimerEvent>
#include <vector>
#include "sculptor.h"

/**
 * @brief Classe reponsavel pela matriz no sistema
 *
 */
class PlotterMatriz : public QWidget
{
    Q_OBJECT
public:

    /**
     * @brief Construtor da interface visual da matriz no sistema
     *
     * @param parent
     */
    explicit PlotterMatriz(QWidget *parent = nullptr);
    /**
     * @brief Responsavel por desenhar a matriz no sistema de acosto com as variaveis
     *
     * @param event
     */
    void paintEvent(QPaintEvent *event);
    /**
     * @brief Responsavel por retornar os valor de X e Y na matriz
     *
     * @param event
     */
    void mouseMoveEvent(QMouseEvent *event);
    /**
     * @brief Responsavel por criar uma acao de pintura ou remocao continua com click-arraste
     *
     * @param event
     */
    void mousePressEvent(QMouseEvent *event);
    /**
     * @brief Responsavel por criar uma acao de pintura ou remocao local com um click
     *
     * @param event
     */
    void mouseReleaseEvent(QMouseEvent *event);
    /**
     * @brief Responsavel por desenhar a forma geometria no plano
     *
     * @param forma: que obejto esta sedado para desenhar/remover do plano
     * @param mousePressed booleando de acao do mouse
     */
    void desenharForma(int forma, bool mousePressed);

    unsigned int plano; /**< orientacao visual da matriz em plano X-Y */
    unsigned int forma; /**< parte visual do cubo */
    int scultporTamX; /**< tamanho da dimensao da matriz em X */
    int scultporTamY; /**< tamanho da dimensao da matriz em Y */
    int scultporTamZ; /**< tamanho da dimensao da matriz em Z*/
    Sculptor *cubo; /**< e onde o sistema de matriz funciona */
    int corR; /**< valor referente a coloracao vermelha setada para a matriz */
    int corG; /**< valor referente a coloracao verde setada para a matriz */
    int corB; /**< valor referente a coloracao azul setada para a matriz */
    int transparencia; /**< valor referente a transparencia setada para a matriz */
    int tamX; /**< valor referente ao tamanho da dimensao em X setada para a Put/Cut Box */
    int tamY; /**< valor referente ao tamanho da dimensao em Y setada para a Put/Cut Box */
    int tamZ; /**< valor referente ao tamanho da dimensao em Z setada para a Put/Cut Box */
    int raio; /**< valor referente ao tamanho do raio setada para a Put/Cut Sphere */
    int raioX; /**< valor referente ao tamanho do raio setada para a Put/Cut Elipse */
    int raioY; /**< valor referente ao tamanho do raio setada para a Put/Cut Elipse */
    int raioZ; /**< valor referente ao tamanho do raio setada para a Put/Cut Elipse */

    int raioMax; /**< valor referente ao tamanho maximo raio setada para o sistema */
    int cortePlano; /**< valor referente ao plano apresentado visualmente no sistema */


private:

    std::vector<std::vector<Voxel>> mtrz; /**< matriz de vetor */

    bool mousePressed; /**< booleando de acao do click do mouse */
    int mouseX; /**< posicao do mouse nas coordenadas X */
    int mouseY; /**< posicao do mouse nas coordenadas Y */
    int posX; /**< variavel usada para desenhar a fugura na coordenada do plano */
    int posY; /**< variavel usada para desenhar a fugura na coordenada do plano */
    int posZ; /**< variavel usada para desenhar a fugura na coordenada do plano */
    int tamQ; /**< variavel usada identificar a figura a ser desenhada no plano */

signals:

    /**
     * @brief valor da coordenada de X do mouse no mouseMoveEvent
     *
     * @param int
     */
    void moveX(int);
    /**
     * @brief valor da coordenada de Y do mouse no mouseMoveEvent
     *
     * @param int
     */
    void moveY(int);
    /**
     * @brief valor da posicao de X do mouse no Event mousePressEvent
     *
     * @param int
     */
    void clickX(int);
    /**
     * @brief valor da posicao de Y do mouse no Event mousePressEvent
     *
     * @param int
     */
    void clickY(int);
    /**
     * @brief valor referente a qual linha o mouse foi clicado
     *
     * @param int
     */
    void mouseLinha(int);
    /**
     * @brief valor referente a qual coluna o mouse foi cliclado
     *
     * @param int
     */
    void mouseColuna(int);
    /**
     * @brief valor das variaveis em coordenada X e Y
     *
     * @param int
     * @param int
     */
    void mouseXY(int,int);
    /**
     * @brief Funcao reponsavel por escolha do plano para visualizacao no sistema
     *
     * @param int
     */
    void escolherPlano(int);

public slots:

    /**
     * @brief Funcao reponsavel por alterar valores PutBox e CutBox em coordenadas X
     *
     * @param referenciado pelo valor do slide
     */
    void mudaTamX(int size);
    /**
     * @brief Funcao reponsavel por alterar valores PutBox e CutBox em coordenadas Y
     *
     * @param referenciado pelo valor do slide
     */
    void mudaTamY(int size);
    /**
     * @brief Funcao reponsavel por alterar valores PutBox e CutBox em coordenadas Z
     *
     * @param referenciado pelo valor do slide
     */
    void mudaTamZ(int size);
    /**
     * @brief Funcao reponsavel pela alteracao do valor do raio da PutSphere e CutSphere
     *
     * @param referenciado pelo valor do slider
     */
    void mudaRaio(int rd);
    /**
     * @brief Funcao reponsavel pela alteracao do valor do raio da PutElipse e CutElipse em coordenadas X
     *
     * @param referenciado pelo valor do slider
     */
    void mudaRaioX(int rx);
    /**
     * @brief Funcao reponsavel pela alteracao do valor do raio da PutElipse e CutElipse em coordenadas Y
     *
     * @param referenciado pelo valor do slider
     */
    void mudaRaioY(int ry);
    /**
     * @brief Funcao reponsavel pela alteracao do valor do raio da PutElipse e CutElipse em coordenadas Z
     *
     * @param referenciado pelo valor do slider
     */
    void mudaRaioZ(int rz);
    /**
     * @brief Funcao responsavel pela alteracao da cor Vermelha da figura geometrica
     *
     * @param referenciado pelo valor do slider
     */
    void mudaCorR(int red);
    /**
     * @brief Funcao responsavel pela alteracao da cor Verde da figura geometrica
     *
     * @param referenciado pelo valor do slider
     */
    void mudaCorG(int green);
    /**
     * @brief Funcao responsavel pela alteracao da cor Azul da figura geometrica
     *
     * @param referenciado pelo valor do slider
     */
    void mudaCorB(int blue);
    /**
     * @brief Funcao responsavel pela alteracao da transparencia da figura geometrica
     *
     * @param referenciado pelo valor do slider
     */
    void mudaTransparencia(int alpha);
    /**
     * @brief Funcao responsavel pela alteracao da vista do plano
     *
     * @param reverenciado pelo valor do slider
     */
    void mudaCorte(int pln);
    /**
     * @brief Funcao responsavel pela alteracao da coordenada X da matriz (definida usuario)
     *
     * @param referenciado pelo valor do SpinBox
     */
    void mudaScpTamX(int scpX);
    /**
     * @brief Funcao responsavel pela alteracao da coordenada Y da matriz (definida usuario)
     *
     * @param referenciado pelo valor do SpinBox
     */
    void mudaScpTamY(int scpY);
    /**
     * @brief Funcao responsavel pela alteracao da coordenada Z da matriz (definida usuario)
     *
     * @param referenciado pelo valor do SpinBox
     */
    void mudaScpTamZ(int scpZ);

};

#endif // PLOTTERMATRIZ_H
