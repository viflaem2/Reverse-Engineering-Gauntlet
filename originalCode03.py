import base64
import random

def xor_string(input_string, seed):
    random.seed(seed)
    xor_result = bytearray()
    for char in input_string:
        xor_value = random.randint(1, 256)
        xor_result.append(ord(char) ^ xor_value)
    b64_result = base64.b64encode(xor_result).decode('utf-8')
    return b64_result

if __name__ == "__main__":
    input_string = "Randomness_is_predictable."
    seed = "seed"  
    b64_output = xor_string(input_string, seed)
    print(f"Base64 Output: {b64_output}")
