#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "sculptor.h"
#include "vector"

namespace Ui {
class MainWindow;
}

/**
 * @brief Classe responsavel por todo o sistema
 *
 */
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:

    /**
     * @brief Construtor
     *
     * @param parent
     */
    explicit MainWindow(QWidget *parent = 0);
    /**
     * @brief Destrutor
     *
     */
    ~MainWindow();

private:
    Ui::MainWindow *ui; /**< TODO: describe */

public slots:

    /**
     * @brief Funcao que seta a visualizao do plano (setada como Default)
     *
     */
    void planoXY();
    /**
     * @brief Funcao que seta a visualizao do plano
     *
     */
    void planoYZ();
    /**
     * @brief Funcao que seta a visualizao do plano
     *
     */
    void planoZX();
    /**
     * @brief Funcao que desenha um Voxel no plano
     *
     */
    void putVox();
    /**
     * @brief Funcao que remove um Voxel do plano
     *
     */
    void cutVox();
    /**
     * @brief Funcao que desenha uma Caixa no plano
     *
     */
    void putBox();
    /**
     * @brief Funcao que remove uma Caixa do plano
     *
     */
    void cutBox();
    /**
     * @brief Funcao que desenha uma Espera no plano
     *
     */
    void putSphere();
    /**
     * @brief Funcao que remove uma Esfera do plano
     *
     */
    void cutSphere();
    /**
     * @brief Funcao que desenha uma Elipse no plano
     *
     */
    void putEllipse();
    /**
     * @brief Funcao que remove uma Elipse do plano
     *
     */
    void cutEllipse();
    /**
     * @brief Funcao para finalizar o programa
     *
     */
    void finalizar();
    /**
     * @brief Funcao para criar uma DialogBox contendo as informacaoes de desenvolvimento
     *
     */
    void popupInfo();
    /**
     * @brief Funcao que caixa de dialo mostrando a confirmacao de salvamento da figura
     *
     */
    void popupSalvar();
    /**
     * @brief Funcao que salva o desenho 3d nas extensoes .VECT e .OFF
     *
     */
    void salvarFigura();
    /**
     * @brief Funcao que cria a matriz com as dimensoes definidas pelo usuario
     *
     */
    void criaMatriz();

};

#endif // MAINWINDOW_H
