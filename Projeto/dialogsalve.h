#ifndef DIALOGSALVE_H
#define DIALOGSALVE_H

#include <QDialog>

namespace Ui {
class DialogSalve;
}

/**
 * @brief Classe responsavel pela exibicao da informacao de salvamento
 *
 */
class DialogSalve : public QDialog
{
    Q_OBJECT

public:

    /**
     * @brief Construtor
     *
     * @param
     */
    explicit DialogSalve(QWidget *parent = nullptr);
    /**
     * @brief Destrutor
     *
     */
    ~DialogSalve();

private:
    Ui::DialogSalve *ui; /**< TODO: describe */
};

#endif // DIALOGSALVE_H
