#ifndef SCULPTOR_H
#define SCULPTOR_H
#include <string>
#include <vector>

/**
 * @brief Estutura do voxel. Modelo RGBA
 *
 */
struct Voxel {

    int r; /**< valor da cor em Vermelho */
    int g; /**< valor da cor em Verde */
    int b; /**< valor da cor em Azul */
    int a; /**< valor da transparencia */
    bool isOn; /**< booleando para saber se esta ativo ou nao a figura */
};

/**
 * @brief Classe usada para criar figuras geomtricas em 3D
 *
 */
class Sculptor {
protected:

    Voxel ***v; /**< Matriz 3D em voxel */
    float r; /**< parametro da cor vermelha */
    float g; /**< parametro da cor verde */
    float b; /**< parametro da cor azul */
    float a; /**< paramtro da transparencia */
    int nx; /**< tamanho em X da matriz 3D */
    int ny; /**< tamanho em Y da matriz 3D */
    int nz; /**< tamanho em Z da matriz 3D */

public:

    /**
     * @brief Construtor da matriz 3D
     *
     * @param tamanho de X do Sculptor
     * @param tamanho de Y do Sculptor
     * @param tamanho de Z do Sculptor
     */
    Sculptor(int tx,int ty,int tz);
    /**
     * @brief matriz 2D da representacao de um plano da matriz 3D
     *
     * @param qual vista deve ser apresentada
     * @param qual plano deve ser representada
     * @return Matriz 2D plotada
     */
    std::vector<std::vector<Voxel>> readMx (int dim, int plano);
    /**
     * @brief Funcao que seta as cores e transparencia do voxel
     *
     * @param valor do componente em Vermelho
     * @param valor do componente em Verde
     * @param valor do componente em Azul
     * @param valor do componente para Transparencia
     */
    void setColor(float _r, float _g, float _b, float alpha);
    /**
     * @brief Funcao que cria o Voxel
     *
     * @param posicao X do Voxel
     * @param posicao Y do Voxel
     * @param posicao Z do Voxel
     */
    void putVoxel(int x, int y, int z);
    /**
     * @brief Funcao que remove o Voxel
     *
     * @param posicao X do Voxel
     * @param posicao Y do Voxel
     * @param posicao Z do Voxel
     */
    void cutVoxel(int x, int y, int z);
    /**
     * @brief Funcao que cria uma Box
     *
     * @param posicao X inical da caixa
     * @param posicao X final da caixa
     * @param posicao Y inical da caixa
     * @param posicao Y final da caixa
     * @param posicao Z inical da caixa
     * @param posicao z final da caixa
     */
    void putBox(int x0, int x1, int y0, int y1, int z0, int z1);
    /**
     * @brief Funcao que remove uma Box
     *
     * @param posicao X inical da caixa
     * @param posicao X final da caixa
     * @param posicao Y inical da caixa
     * @param posicao Y final da caixa
     * @param posicao Z inical da caixa
     * @param posicao z final da caixa
     */
    void cutBox(int x0, int x1, int y0, int y1, int z0, int z1);
    /**
     * @brief Funcao que cria uma Esfera
     *
     * @param posicao X do centro da esfera
     * @param posicao Y do centro da esfera
     * @param posicao Z do centro da esfera
     * @param tamanho do raio da esfera
     */
    void putSphere(int xcenter, int ycenter, int zcenter, int raio);
    /**
     * @brief Funcao que remove uma Esfera
     *
     * @param posicao X do centro da esfera
     * @param posicao Y do centro da esfera
     * @param posicao Z do centro da esfera
     * @param tamanho do raio da esfera
     */
    void cutSphere(int xcenter, int ycenter, int zcenter, int raio);
    /**
     * @brief Funcao que cria uma Elipsoide
     *
     * @param posicao X do centro da Elipsoide
     * @param posicao Y do centro da Elipsoide
     * @param posicao Z do centro da Elipsoide
     * @param tamanho do raio X da Elipsoide
     * @param tamanho do raio Y da Elipsoide
     * @param tamanho do raio Z da Elipsoide
     */
    void putEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);
    /**
     * @brief Funcao que remove uma Elipsoide
     *
     * @param posicao X do centro da Elipsoide
     * @param posicao Y do centro da Elipsoide
     * @param posicao Z do centro da Elipsoide
     * @param tamanho do raio X da Elipsoide
     * @param tamanho do raio Y da Elipsoide
     * @param tamanho do raio Z da Elipsoide
     */
    void cutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);
    /**
     * @brief Funcao que cria um arquivo da matriz 3D na extensao .OFF
     *
     * @param filename
     */
    void writeOFF(const std::string filename);
    /**
     * @brief Funcao que cria um arquivo da matriz 3D na extensao .VECT
     *
     * @param filename
     */
    void writeVECT(const std::string filename);
    /**
     * @brief Destrutor
     *
     */
    ~Sculptor();

};
#endif // SCULPTOR_H
