
# for i in range (1,7) :
#     print(i*'*')
    
#     if i == 6 :
#         for i in range (5,0,-1) :
#             print(i*'*')
            

for i in range(5,-1,-1) :
    print(i*' ',end='')
    print((6-i)*'*'+(5-i)*'*',end='')
    print((i*2)*' '+(6-i)*'*',end='')
    print((5-i) * '*',end='')
    print((i*2)*' '+ (6-i)*'*',end='')
    print((5-i)*'*')
    

    
    if i == 0 :
        for j in range(5,0,-1) :
            print((6-j)*' ',end='')
            print(j*'*'+(j-1)*'*', end='')
            print(((6-j)*2)*' '+j*'*', end='')
            print((j-1)*'*', end='')
            print(((6-j)*2)*' '+j*'*', end='')
            print((j-1)*'*')