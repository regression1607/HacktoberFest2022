class Employee:
    def __init__(self, id, name, sal):
        self.id = id
        self.name = name
        try:
            sal = int(sal)
            if(sal < 2000):
                self.sal = 2000
            else:
                self.sal = sal
        except Exception as e:
            print(e)
            print("Salary is set to 2000.")
            self.sal = 2000

    def SalarySlip(self):
        print("\nEmployee_ID:       ", self.id)
        print("Name:              ", self.name)
        print("Employee_Basic:    ", self.sal)
        Employee_HRA = self.sal*0.18
        print("Employee_HRA:      ", Employee_HRA)
        Employee_DA = self.sal*0.1
        print("Employee_DA:       ", Employee_DA)
        Employee_GrossSAL = self.sal+Employee_HRA+Employee_DA
        Employee_TAX = 0.1*Employee_GrossSAL
        print("Employee_TAX:      ", Employee_TAX)
        print("Employee_GrossSAL: ", Employee_GrossSAL)
        Employee_NET_SAL = Employee_GrossSAL-Employee_TAX
        print("Employee_NET SAL:  ", Employee_NET_SAL)
        if(Employee_GrossSAL >= 2560 and Employee_GrossSAL < 5000):
            print("Classification:     Group-A")
        elif(Employee_GrossSAL >= 5000 and Employee_GrossSAL < 10000):
            print("Classification:     Group-B")
        elif(Employee_GrossSAL >= 10000):
            print("Classification:     Group-C")
        print()


while(1):
    try:
        n = int(input("Enter the Number of Employees: "))
        break
    except Exception as e:
        print(e)

l = []
ids = []

for i in range(n):
    id = input("Enter the id: ")
    if(id in ids or len(id) == 0):
        while(id in ids or len(id) == 0):
            id = input("Id Already taken or invalid input,Enter Again: ")
    ids.append(id)
    name = input("Enter the Name: ")
    if(len(name) == 0):
        while(len(name) == 0):
            name = input("Id Already taken or invalid input,Enter Again: ")
    sal = input("Enter the Salary: ")
    print()
    object = Employee(id, name, sal)
    l.append(object)
while(1):
    id = input("Enter the id of employee to get SalarySlip or 'e' for exit: ")
    if(id == 'e'):
        exit()
    else:
        for i in range(n):
            if(l[i].id == id):
                l[i].SalarySlip()
                break
        else:
            print("Employee Not Found.\n")
