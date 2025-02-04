from pynput import keyboard
import dc_pigpio as dp
print("1. maju")
print("2. mundur")
print("3. kanan")
print("4. kiri")
print("5. counter-clockwise")
print("6. clockwise")
print("7. diagonal")
print("input WASD for move normally, IJKL for diagonally.\nQE for counter-clockwise respectively")

def on_press(key):
    try:
        if key.char == 'w':
            dp.maju(1000,128)
        elif key.char == 'a':
            dp.kiri(1000,128)
        elif key.char == 's':
            dp.mundur(1000,128)
        elif key.char == 'd':
            dp.kanan(1000,128)
        elif key.char == 'i':
            dp.maju_x(1000,128)
        elif key.char == 'j':
            dp.kiri_x(1000,128)
        elif key.char == 'k':
            dp.mundur_x(1000,128)
        elif key.char == 'l':
            dp.kanan_x(1000,128)
        elif key.char == 'e':
            dp.cw(10000,75)
        elif key.char == 'q':
            dp.cc(10000,75)
    except AttributeError:
        pass

def on_release(key):
    if key.char in ['w', 'a', 's', 'd', 'i', 'j', 'k', 'l','e', 'q']:
        dp.stop()
    if key == keyboard.Key.esc:
        return False

with keyboard.Listener(on_press=on_press, on_release=on_release) as listener:
    listener.join()
dp.pi.stop()


