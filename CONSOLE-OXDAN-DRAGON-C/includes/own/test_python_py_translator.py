from msvcrt import getch
from colorama import Fore
from translate import Translator

def remove_098(string):
    return string.replace(" ", "")

def start():

    try:
            print(Fore.RED + "\nEnter 'esc' (for exit)")
            x = input(Fore.YELLOW + "Enter language from: " + Fore.WHITE)
            if remove_098(x.lower()) == "esc":

               exit(0)

	    print(Fore.RED + "\nEnter 'esc' (for exit)")
            y = input(Fore.YELLOW + "Enter language to: " + Fore.WHITE)
            if remove_098(y.lower()) == "esc":

                exit(0)

	    print(Fore.RED + "\nEnter 'esc' (for exit)")
            z = input(Fore.YELLOW + "Enter text to translate from " + x + " to " + y + ": " + Fore.WHITE)
            if remove_098(z.lower()) == "esc":

                exit(0)

            translator = Translator(from_lang = str(x), to_lang = str(y))

            result = translator.translate(str(z))

            print(Fore.YELLOW + "Translated text: " + Fore.WHITE + result)
            getch()

    except:

        print(Fore.RED + "\n(!ERROR!) " + Fore.WHITE + "=" + Fore.GREEN + " (!Enter valid languages!)\n" + Fore.WHITE)
        getch()
        exit()

start()
