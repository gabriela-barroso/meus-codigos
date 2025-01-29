def addInicio(self,item):
    temp = Node(item)
    temp.setNext(self.head)
    self.head = temp

def buscar(lista,item):
    current = lista.head
    previous = None

    if lista.head is None:
        return None

    while current is not None:
        if current.getData() == item:
            if previous is not None:
                     
                previous.setNext(current.getNext())
                      
                current.setNext(lista.head)
                lista.head = current
                    
            return item
        else:
                   
            previous = current
            current = current.getNext()

           
    return None