a = input('O programa funciona?')
if a == 'SIM':
    b = input('Você entende o que fez?')
    if b == 'SIM':
        print('Ótimo, então não mexe!')
    else:
        c = input('Já foi na tutoria?')
        if c == 'SIM':
            print('Choremos!')

        else:
            print('Temos um time a disposição!')

else:
    d = input('Você sabe onde está o erro?')
    if d == 'SIM':
        e = input('Acha que pode solucionar sozinho?')
        if e =='SIM':
            print('Então mão na massa!')

        else:
            f = input('Já pesquisou no google?')
            if f == 'NÃO':
                print('Corre lá então!')

            else:
                g = input('Já foi na tutoria?')
                if g == 'SIM':
                    print('Choremos!')

                else:
                    print('Temos um time a disposição!')

    elif d == 'NÃO':
        h = input('Já foi na tutoria?')
        if h == 'SIM':
            print('Choremos!')

        else:
            print('Temos um time a disposição!')

