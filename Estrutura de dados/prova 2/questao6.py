class No:

     def __init__(self,d):

         self.dado = d

         self.esq = None

         self.dir = None

     

     def __str__(self):

         return str(self.dado)

         

class ArvoreBinariaBusca:

     def __init__(self,d):

        self.raiz = No(d)

     

     def imprimir(self):

         def imprimirRec1(no,nivel,lado,pai):

              if no:

                 if pai == None:

                    print(lado,"-"*nivel,no.dado)

                 else:

                    print(lado,"-"*nivel,no.dado,"pai:",pai.dado)

                 imprimirRec1(no.esq,nivel+1,'E',no)

                 imprimirRec1(no.dir,nivel+1, 'D',no)

         imprimirRec1(self.raiz,0,'R',None)

     

     def inserir(self, d):

         def insereRec(atual,no):

             if no.dado < atual.dado:

                 if atual.esq == None:

                    atual.esq = no

                 else:

                    insereRec(atual.esq,no)

             elif no.dado > atual.dado:

                  if atual.dir == None:

                    atual.dir = no

                  else:

                    insereRec(atual.dir,no)

         novo = No(d)

         if self.raiz == None:

            self.raiz = novo

         else:


            insereRec(self.raiz,novo)
def folhas(self):
    def contagem_folhas(no):
        if no == None:
            return 0
        if no.esq == None and no.dir == None:
            return 1
        return contagem_folhas(no.esq) + contagem_folhas(no.dir)


    return contagem_folhas(self.raiz)

ab = ArvoreBinariaBusca(70)
ab.inserir(50)
ab.inserir(40)
ab.inserir(60)
ab.inserir(90)
ab.inserir(80)
ab.inserir(100)
ab.imprimir()
print("Número de folhas: ",folhas(ab))
