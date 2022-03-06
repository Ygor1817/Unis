#include <iostream>
#define tamanho 5
using namespace std;
typedef struct{
      int topo ;
      int item [tamanho] ;
}PILHA;
void iniciaPilha (PILHA &p) {
     p.topo = -1 ;
}
bool pilhaVazia(PILHA p){
    if(p.topo == -1 )
        return true;
    else
        return false;
}
bool pilhaCheia(PILHA p){
    if (p.topo == tamanho-1)
        return true;
    else
        return false;
}
void empilha(PILHA &p, int x){
    p.item[++p.topo]=x;
}
int desempilha(PILHA &p){
    return (p.item[p.topo--]) ;
}

int main(){
    PILHA s ;
    //criar a pilha
    iniciaPilha (s);
    //verifica que a pilha está vazia
    if(pilhaVazia(s))
        cout<<"A pilha esta vazia.\n"<<endl;
    else
        cout<<"A pilha nao esta vazia.\n"<<endl;
    //empilhar cinco elementos
    empilha(s,26);
    empilha(s,33);
    empilha(s,17);
    empilha(s,6);
    empilha(s,9);
    //empilha(s,18);
    cout<<"Os itens foram empilhados.\n"<<endl;
    
    //verifica que a pilha está cheia
    if(pilhaCheia(s))
        cout<<"A pilha esta cheia.\n"<<endl;
    else
        cout<<"A pilha nao esta cheia.\n"<<endl;
    //desempilhar e mostrar um elemento
    cout<<"Item desempilhado 1: "<<desempilha(s)<<endl;
    //desempilhar e mostrar um segundo elemento
       cout<<"Item desempilhado 2: "<<desempilha(s)<<endl;
    //terminar
 
    return 0;
}
