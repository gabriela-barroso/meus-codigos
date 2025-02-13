def altura(ab):
    if ab == None:
        return 0
    def calcular(no):
        if no == None:
            return 0
        if calcular(no.esq)>calcular(no.dir):
            return 1 + calcular(no.esq)
        
        else:
            return 1 + calcular(no.dir)
    
    return calcular(ab.raiz)