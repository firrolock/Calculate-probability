
def calculate(num, lvl):
    if (lvl == 1):
        return num + 1;
	
    if (num == 0):
        return 1;
	
    return calculate(num, lvl - 1) + calculate(num - 1, lvl);

def main():
    num = 0; 
    level = 0;
    print("Calculating probability program.");
    print("Enter the number of item(cannot be less than 1): ", end = "");
    num = int(input());
    print("Enter the number of basket(cannot be less than 2): ", end = "");
    level = int(input());
    result = calculate(num, level);
    print("Calculating...\n");
    print("All of the probability is %d"%result);

if __name__ == "__main__":
    main();