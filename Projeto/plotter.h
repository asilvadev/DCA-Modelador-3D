#ifndef PLOTTER_H
#define PLOTTER_H
#include <QWidget>

#include <QColor>


/**
 * @brief Classe reponsavel pela Widget de cores
 *
 */
class Plotter : public QWidget
{
    Q_OBJECT


public:    


    /**
     * @brief Construtor
     *
     * @param
     */
    explicit Plotter(QWidget *parent = nullptr);
    /**
     * @brief Funcao que desenha o retangulo de cores do sistema
     *
     * @param event
     */
    void paintEvent(QPaintEvent *event);

    int corR; /**< Seta a cor Vermelha */
    int corG; /**< Seta a cor Verde */
    int corB; /**< Seta a cor Azul */
    int transpA; /**< Seta a transparencia da cor */

public slots:

    /**
     * @brief Funcao que muda o valor da cor Vermelha
     *
     * @param cR e o valor recebido pelo slider
     */
    void mudaCorR(int cR);
    /**
     * @brief Funcao que muda o valor da cor Verde
     *
     * @param cG e o valor recebido pelo slider
     */
    void mudaCorG(int cG);
    /**
     * @brief Funcao que muda o valor da cor Azul
     *
     * @param cB e o valor recebido pelo slider
     */
    void mudaCorB(int cB);
    /**
     * @brief Funcao que muda a transaprecia da cor
     *
     * @param tA e o valor recebido pelo slider
     */
    void mudaTranspA(int tA);

};

#endif // PLOTTER_H
