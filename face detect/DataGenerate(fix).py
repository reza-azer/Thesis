import time
f = 0
file = open('data13.txt', 'r')
# for bit in file:
#     f+=1
#     print("Jumlah row =",f,", jumlah lenth =",len(bit))
for bit in file:
    f+=1
    panjang = len(bit)
    # print('line ke =', f)
    # print("panjang bit ke sampaing =",panjang)
    b = [0] * 100 
    c = 0
    a = 0
    d = 0
    for i in range(panjang) :
        if bit[i] == bit[panjang-1]:
            break
        if bit[i+1]==bit[i]:
            # print("data ke =",i,", sama dengan =",nilai,"/",bit[i])
            a=a+1
        if bit[i]!=bit[i+1]:
            b[c]=a
            c+=1
            a+=1
    print(" ")
    print("//baris", f)
    for i in range(c):
        print(b[i])
        if i<=0:
            print("for (byte i=", b[i-1],";i<=",b[i],";i++) {")
            print("wajahmasuk[",f,"][i]=",bit[b[i]],"; }")
        else:
            print("for (byte i=", b[i-1]+1,";i<=",b[i],";i++) {")
            print("wajahmasuk[",f,"][i]=",bit[b[i]],"; }")
        # time.sleep(1)
        # print(i)
        # print(b[i])
        # print(bit[b[i]])
        # print(c)
        d=+1
print(" ")
print("jumlah baris = ", f)
print("jumlah kolom = ", panjang-1)
#     break
    

