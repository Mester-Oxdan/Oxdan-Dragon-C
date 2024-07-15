from msvcrt import getch
from colorama import Fore
from translate import Translator

def start():

    try:
            print(Fore.RED + "\nWrite 'esc' (for exit)")
            x = input(Fore.YELLOW + "Enter language from: " + Fore.WHITE)
            if x == "esc":

               exit(0)

            y = input(Fore.YELLOW + "Enter language to: " + Fore.WHITE)
            if y == "esc":

                exit(0)
            z = input(Fore.YELLOW + "Enter text to translate from " + x + " to " + y + ": " + Fore.WHITE)
            if z == "esc":

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
