#criando classe que tem frações como objeto
def mdc(m,n):
    while m%n != 0:
        oldm = m
        oldn = n

        m = oldn
        n = oldm%oldn
    return n

class Fraction: #definindo a classe
    def __init__(self,cima,baixo): #constructor definindo como os objetos de dados são criados (self é um parâmetro que referencia o próprio objeto)
        self.num = cima
        self.den = baixo

    def __str__(self): #transformando objeto em string concatenada, melhor forma de printar o objeto
        return str(self.num)+'/'+str(self.den)
    
    def __add__(self,other): #incluindo a soma de frações a classe
        novonum = self.num*other.den + self.den*other.num
        novoden = self.den*other.den
        comum = mdc(novonum,novoden)
        return Fraction(novonum//comum ,novoden//comum)
    
    def __eq__(self,other):
        primeiro = self.num*other.den
        segundo = self.den*other.num
        return primeiro == segundo

#criando uma instância da classe Fraction (usamos o nome da classe invocando o constructor e passamos valores necessarios para iniciar o estado)
x = Fraction(1,2)
y = Fraction(2,3)
print(x+y)
print(x==y)

