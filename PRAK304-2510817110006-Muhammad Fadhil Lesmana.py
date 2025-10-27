try:
    while True:
        n = int(input())
        if n < 0 or n > 99:
            print("Anda Menginput Melebihi Limit Bilangan")
        elif n == 0:
            print("Nol")
        elif n < 10:
            print("Satuan")
        elif n < 20:
            print("Belasan")
        else:
            print("Puluhan")
except EOFError:
    pass
