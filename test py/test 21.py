balance = 10000.0
withdraw = float(input("Enter amount to withdraw: "))

if withdraw <= balance:
    balance = balance - withdraw
    print("Transaction Successful!")
    print(f"Remaining Balance: ₹{balance:.2f}")
else:
    print("Insufficient Balance!")
