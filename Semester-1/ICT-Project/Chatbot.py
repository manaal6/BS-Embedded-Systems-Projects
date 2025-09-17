print("Hello! I am your simple chatbot. Type 'bye' to exit.")

while True:
    user_input = input("You: ").lower()

    if user_input == "bye":
        print("Chatbot: Goodbye! Have a nice day.")
        break
    elif "hello" in user_input or "hi" in user_input:
        print("Chatbot: Hi there! How can I help you?")
    elif "your name" in user_input:
        print("Chatbot: I am a simple chatbot written in Python.")
    elif "how are you" in user_input:
        print("Chatbot: I'm just code, but I'm doing great! ")
    elif "iot" in user_input:
        print("Chatbot: IoT means Internet of Things, connecting devices to the internet.")
    else:
        print("Chatbot: Sorry, I don’t understand that.")
