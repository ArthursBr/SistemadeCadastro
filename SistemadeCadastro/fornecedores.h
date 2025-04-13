#ifndef FORNECEDORES_H
#define FORNECEDORES_H

#define NOME1_TAM 42
#define NOME2_TAM 42
#define CONTATO_TAM 15

#define FORNECEDOR_EDITAR 0
#define FORNECEDOR_EXCLUIR 1

#define ERRO_NADA_ESCRITO -1
#define ERRO_CODIGO_EXISTENTE 0
#define ERRO_NUMERO_INVALIDO 1
#define SEM_ERRO 2

struct Fornecedor {
    int codigo;
    char empresaNome[NOME1_TAM+1];
    char responsavel[NOME2_TAM+1];
    char contato[CONTATO_TAM+1];
};

struct TabelaFornecedor {
    int qtd;
    Fornecedor *dados;
};

void InicializarTabela(TabelaFornecedor &tabela);
void carregarFornecedores(TabelaFornecedor &tabela);
void ArmazenarDados(TabelaFornecedor &tabela, Fornecedor &f);
bool verificarIdExistente(TabelaFornecedor &tabela, int codigo);
void formataContato(char contato[]);
void efetuarCadastro(char **dados, TabelaFornecedor &tabela);               // Criado pelo m�dulo Interface
void efetuarExclusao(TabelaFornecedor &tabela, int codigo);            // Criado pelo m�dulo interface
void efetuarPesquisa(TabelaFornecedor &tabela, char *filtro);               // Criado pelo m�dulo interface
void efetuarEdicao(TabelaFornecedor &tabela, Fornecedor &f, int indice);   // Criado pelo m�dulo interface
void efetuarEdicao(TabelaFornecedor &tabela);                              // Criado pelo m�dulo interface
int verificarCad(char **dados, TabelaFornecedor &tabela);                  // Criado pelo m�dulo interface
int verificarEdicao(Fornecedor &f);                                        // Criado pelo m�dulo interface
int verificarEdicao(char **f);                                             // Criado pelo m�dulo interface
void corrigirTabelaInterface(TabelaFornecedor &tabela, int codigo);         // Criado pelo m�dulo interface
void LiberarMemoria(TabelaFornecedor &tabela);

#endif // FORNECEDORES_H
