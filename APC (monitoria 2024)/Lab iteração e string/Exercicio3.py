nome = input()
mensagem = input().lower()

string_vazia = ''
for palavra in mensagem.split():
    if palavra == 'joana':
        string_vazia+='Joana'

if string_vazia == '':
    print(print(f'{nome} nao falou nada nao po'))

else:
    print(string_vazia)