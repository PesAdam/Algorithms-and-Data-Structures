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

numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10,]  

result = linear_search(numbers, input("Zadaj cislo: ")) 

verify(result)      