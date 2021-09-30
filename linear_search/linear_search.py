numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10,]  
print(numbers)
cislo = int(input("zadaj cislo ktore chces najst: "))

def linear_search(list, target):
    # Vracia index kde sa nachadza target ak nie tak nevrati nic
    
    for i in range(0, len(list)):
        if list[i] == target:
            return i 
    return None    


def verify(index):
    if index is not None:
        print("Target je na indexe:", index)
    else:
        print("Target nebol najdeny :(")

result = linear_search(numbers, cislo) 

verify(result)      