class Queue:
    def __init__(self):
        self.items = []

    def isEmpty(self):
        return self.items == []

    def enqueue(self, item):
        self.items.insert(0,item)

    def dequeue(self):
        return self.items.pop()

    def size(self):
        return len(self.items)
    
    def print(self):
        for i in range(self.size()):
            print(f"{self.items[self.size()-i-1]}", end = ', ')


class Stack:
    def __init__(self):
        self.items = []

    def isEmpty(self):
        return self.items == []

    def push(self, item):
        self.items.append(item)

    def pop(self):
        return self.items.pop()

    def peek(self):
        return self.items[len(self.items)-1]

    def size(self):
        return len(self.items)
     
    def print(self):
        for i in range(self.size()):
            print(f"{self.items[self.size()-i-1]}", end = ', ')


class Cafeteria:
    def __init__(self):
        self.alunos = Queue()
        self.lanche = Stack()

    def serve_almoco(self):
        contador = 0
        tamanho_fila = self.alunos.size()
        esta_vazio = self.lanche.isEmpty()
        while esta_vazio==False and contador<tamanho_fila:
            atualfila = self.alunos.dequeue()
            atualpilha = self.lanche.peek()
            if atualfila == atualpilha:
                self.lanche.pop()
                contador = 0
            else:
                self.alunos.enqueue(atualfila)
                contador+=1
        
        print(self.lanche.size())

        


fila_alunos = [1,1,1,0,0,1]
pilha_lanche = [1,0,0,0,1,1]
cafeteria = Cafeteria()
for i in range(len(fila_alunos)):
    cafeteria.alunos.enqueue(fila_alunos[i])
for i in range(len(pilha_lanche)):
    cafeteria.lanche.push(pilha_lanche[len(pilha_lanche) - i - 1])


cafeteria.serve_almoco()

     
