#ifndef DIALOGINFO_H
#define DIALOGINFO_H

#include <QDialog>

namespace Ui {
class DialogInfo;
}

/**
 * @brief Classe responsavel por mostrar caixa de informação de Desenvolvimento
 *
 */
class DialogInfo : public QDialog
{
    Q_OBJECT

public:

    /**
     * @brief Construtor
     *
     * @param parent
     */
    explicit DialogInfo(QWidget *parent = 0);
    /**
     * @brief Destrutor
     *
     */
    ~DialogInfo();

private:
    Ui::DialogInfo *ui; /**< TODO: describe */
};

#endif // DIALOGINFO_H
