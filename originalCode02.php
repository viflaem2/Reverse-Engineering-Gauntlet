<?php
$key = 'playboy69';
$iv = '1234567890123456'; 
$plaintext = 'PHP_is_really_cool';
$ciphertext = openssl_encrypt($plaintext, 'AES-128-CBC', $key, OPENSSL_RAW_DATA, $iv);
$ciphertext_base64 = base64_encode($ciphertext); 
echo "Encrypted string (Base64): " . $ciphertext_base64; //Oxl9dryCLYZqJlh3gTk73NhvNx3gHvT2+V2SlhrXC5g=
?> 