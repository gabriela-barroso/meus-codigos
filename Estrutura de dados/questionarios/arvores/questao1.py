class No:
    def __init__(self, d):
        self.dado = d
        self.esq = None
        self.dir = None

class ABB:
    def __init__(self):
        self.raiz = None  

    def insere(self, d):
        def insereRec(atual, no):
            if no.dado < atual.dado:
                if atual.esq is None:
                    atual.esq = no
                else:
                    insereRec(atual.esq, no)
            elif no.dado > atual.dado:
                if atual.dir is None:
                    atual.dir = no
                else:
                    insereRec(atual.dir, no)

        novo = No(d)

        if self.raiz is None:
            self.raiz = novo  
        else:
            insereRec(self.raiz, novo)

    def inorder(self):
        return self.perc_inorder(self.raiz, [])

    def perc_inorder(self, no, resultado):
        if no:
            self.perc_inorder(no.esq, resultado)
            resultado.append(no.dado)
            self.perc_inorder(no.dir, resultado)
        return resultado

    def preorder(self):
        return self.perc_preorder(self.raiz, [])

    def perc_preorder(self, no, resultado):
        if no:
            resultado.append(no.dado)  
            self.perc_preorder(no.esq, resultado)
            self.perc_preorder(no.dir, resultado)
        return resultado

    def postorder(self):
        return self.perc_postorder(self.raiz, [])

    def perc_postorder(self, no, resultado):
        if no:
            self.perc_postorder(no.esq, resultado)
            self.perc_postorder(no.dir, resultado)  
            resultado.append(no.dado)  
        return resultado


arvore = ABB()

while True:
    try:
        entrada = input().strip()
        if entrada == "quack":
            break
        elif entrada == "in":
            print(" ".join(map(str, arvore.inorder())))
        elif entrada == "pre":
            print(" ".join(map(str, arvore.preorder())))
        elif entrada == "pos":
            print(" ".join(map(str, arvore.postorder()))) 
            valor = int(entrada)
            arvore.insere(valor)
    except EOFError:
        break
