class No:

     def __init__(self,d):

         self.dado = d

         self.esq = None

         self.dir = None



class ABB:

     def __init__(self,noRaiz):

        self.raiz = noRaiz



     def imprimir(self):

         def imprimirRec(no,nivel,lado):

              if no:

                 print(lado,"-"*nivel,no.dado)

                 imprimirRec(no.esq,nivel+1,'E')

                 imprimirRec(no.dir,nivel+1, 'D')

         imprimirRec(self.raiz,0,'R')

def montaABBB(lista):
    def arvorebalanceada(a,b):
        if a>b:
            return None
        
        elem_mid = ((a + b+1) // 2)
        elem_raiz = No(lista[elem_mid])
        elem_raiz.esq = arvorebalanceada(a, elem_mid - 1)
        elem_raiz.dir = arvorebalanceada(elem_mid + 1, b)

        return elem_raiz

    return arvorebalanceada(0, len(lista) - 1)



raiz = montaABBB([1,2])
ab = ABB(raiz)
ab.imprimir()