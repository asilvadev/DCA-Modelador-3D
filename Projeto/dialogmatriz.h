#ifndef DIALOGMATRIZ_H
#define DIALOGMATRIZ_H

#include <QDialog>

namespace Ui {
class DialogMatriz;
}

/**
 * @brief Classe responsavel por obter valores da matriz fornecida pelo usuario
 *
 */
class DialogMatriz : public QDialog
{
    Q_OBJECT

public:

    /**
     * @brief  Construtor da função
     *
     * @param parent
     */
    explicit DialogMatriz(QWidget *parent = nullptr);
    /**
     * @brief Destrutor
     *
     */
    ~DialogMatriz();

    /**
     * @brief Função para obter os valores de X fornecido pelo usuario
     *
     * @return int
     */
    int getX();
    /**
     * @brief Função para obter os valores de Y fornecido pelo usuario
     *
     * @return int
     */
    int getY();
    /**
     * @brief Função para obter os valores de Z fornecido pelo usuario
     *
     * @return int
     */
    int getZ();

private:
    Ui::DialogMatriz *ui; /**< TODO: describe */
};

#endif // DIALOGMATRIZ_H
