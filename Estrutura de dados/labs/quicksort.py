def quickSort(alist):
    if len(alist) <=1:
        return alist
    esquerda, pivo, direita = reordena(alist)
    esquerda = quickSort(esquerda)
    direita = quickSort(direita)
    esquerda.append(pivo)
    esquerda.extend(direita)
    return esquerda


def reordena(alist):
    pivo = alist[0]
    esquerda = []
    direita = []
    for elem in alist[1:]:
        if elem<=pivo:
            esquerda.append(elem)
        else:
            direita.append(elem)

    return esquerda,pivo,direita
    