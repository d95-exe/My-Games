import tkinter as tk
from ctypes import windll
windll.shcore.SetProcessDpiAwareness(1)   #for output window resolution

root = tk.Tk()
root.geometry("900x350+500+350")
root.title("Guess The Password!")

password = "silvermustang"
tries = 0

def check_password():
    global tries
    attempt = field.get()  # Get input from Entry field
    tries += 1  # Increment the try counter

    if attempt == password:  # Check if correct
        result_label.config(text="🎉 Correct Password! 🎉", fg="green")
        submit_button.config(state="disabled")  # Disable button after success
        field.config(state="disabled")  # Disable input field after success
    else:
        result_label.config(text="❌ Wrong Password! Try Again.", fg="red")
        field.delete(0, tk.END)  # Clear the input field


header = tk.Label(root, text="Welcome to Guess The Password!", font=("papyrus", 15))
header.pack(padx=5, pady=10)

description = tk.Label(root, text="Attempt to guess the password:", font=("papyrus", 15))
description.pack(padx=5, pady=5)

field = tk.Entry(root, font=("Arial", 14))  # Regular input
field.pack(padx=15, pady=15)

submit_button = tk.Button(root, text="Submit", command=check_password, font=("Arial", 12))
submit_button.pack(pady=10)

result_label = tk.Label(root, text="", font=("Arial", 14))  # Blank at start
result_label.pack(pady=5)

tries_label = tk.Label(root, text="Tries: 0", font=("Arial", 12))
tries_label.pack(pady=5)


def update_counter():
    tries_label.config(text=f"Tries: {tries}")

submit_button.config(command=lambda: [check_password(), update_counter()])

root.mainloop()