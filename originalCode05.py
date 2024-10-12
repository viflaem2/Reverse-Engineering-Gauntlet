def atbash(char):
    if char.isalpha():
        return chr(ord('Z') - (ord(char) - ord('A'))) if char.isupper() else chr(ord('z') - (ord(char) - ord('a')))
    return char

def affine_cipher(text, a, b):
    transformed = ''.join(atbash(char) for char in text)
    cipher = ''
    for char in transformed:
        if char.isalpha():
            pos = ord(char) - ord('A') if char.isupper() else ord(char) - ord('a')
            encrypted = (a * pos + b) % 26
            if char.isupper():
                cipher += chr(encrypted + ord('A'))
            else:
                cipher += chr(encrypted + ord('a'))
        else:
            cipher += char
    return cipher
affine_a = 69
affine_b = 420  
plaintext = "BrainFuckAtbashAffineMadness"
ciphertext = affine_cipher(plaintext, affine_a, affine_b)
print(ciphertext) #WknhaGlfzNcwntyNgghaxRnoaxtt
