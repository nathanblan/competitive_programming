#this is incompatabile if you do not have pygames installed. I also can't seem to install so who knows if this works lol
from pygame import mixer

pygame.music.init()
#start mixer
mixer.init()

#load song, set volume, play
mixer.music.load("song.mp3")
mixer.music.set_volume(0.7)
mixer.music.play()

while True:
    print ("Press 'p' to pause 'r' to resume ")
    print ("press e to exit program")
    query = input (">>> ")

    if query == 'p':
        mixer.music.pause()
    elif query == 'r':
        mixer.music.unpause()
    elif query == 'e':
        mixer.music.stop()
        break
