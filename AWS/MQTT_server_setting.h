#ifndef __MQTT_SERVER_SETTING_H__
#define __MQTT_SERVER_SETTING_H__

const char MQTT_SERVER_HOST_NAME[] = "a1fj7nohpko3eg-ats.iot.us-east-1.amazonaws.com";
const char MQTT_CLIENT_ID[] = "ccw_frdm_1";
const char MQTT_USERNAME[] = "ccw_frdm_test";
const char MQTT_PASSWORD[] = "12345678";
const char MQTT_TOPIC_PUB[] = "frdm_mqtt_publish";
const char MQTT_TOPIC_SUB[] = "frdm_mqtt_subscribe";


const int MQTT_SERVER_PORT = 8883;



const char* SSL_CA_PEM =
/* Amazon Root CA 1 */
"-----BEGIN CERTIFICATE-----\n"
"MIIDQTCCAimgAwIBAgITBmyfz5m/jAo54vB4ikPmljZbyjANBgkqhkiG9w0BAQsF\n"
"ADA5MQswCQYDVQQGEwJVUzEPMA0GA1UEChMGQW1hem9uMRkwFwYDVQQDExBBbWF6\n"
"b24gUm9vdCBDQSAxMB4XDTE1MDUyNjAwMDAwMFoXDTM4MDExNzAwMDAwMFowOTEL\n"
"MAkGA1UEBhMCVVMxDzANBgNVBAoTBkFtYXpvbjEZMBcGA1UEAxMQQW1hem9uIFJv\n"
"b3QgQ0EgMTCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEBALJ4gHHKeNXj\n"
"ca9HgFB0fW7Y14h29Jlo91ghYPl0hAEvrAIthtOgQ3pOsqTQNroBvo3bSMgHFzZM\n"
"9O6II8c+6zf1tRn4SWiw3te5djgdYZ6k/oI2peVKVuRF4fn9tBb6dNqcmzU5L/qw\n"
"IFAGbHrQgLKm+a/sRxmPUDgH3KKHOVj4utWp+UhnMJbulHheb4mjUcAwhmahRWa6\n"
"VOujw5H5SNz/0egwLX0tdHA114gk957EWW67c4cX8jJGKLhD+rcdqsq08p8kDi1L\n"
"93FcXmn/6pUCyziKrlA4b9v7LWIbxcceVOF34GfID5yHI9Y/QCB/IIDEgEw+OyQm\n"
"jgSubJrIqg0CAwEAAaNCMEAwDwYDVR0TAQH/BAUwAwEB/zAOBgNVHQ8BAf8EBAMC\n"
"AYYwHQYDVR0OBBYEFIQYzIU07LwMlJQuCFmcx7IQTgoIMA0GCSqGSIb3DQEBCwUA\n"
"A4IBAQCY8jdaQZChGsV2USggNiMOruYou6r4lK5IpDB/G/wkjUu0yKGX9rbxenDI\n"
"U5PMCCjjmCXPI6T53iHTfIUJrU6adTrCC2qJeHZERxhlbI1Bjjt/msv0tadQ1wUs\n"
"N+gDS63pYaACbvXy8MWy7Vu33PqUXHeeE6V/Uq2V8viTO96LXFvKWlJbYK8U90vv\n"
"o/ufQJVtMVT8QtPHRh8jrdkPSHCa2XV4cdFyQzR1bldZwgJcJmApzyMZFo6IQ6XU\n"
"5MsI+yMRQ+hDKXJioaldXgjUkK642M4UwtBV8ob2xJNDd2ZhwLnoQdeXeGADbkpy\n"
"rqXRfboQnoZsG4q5WTP468SQvvG5\n"
"-----END CERTIFICATE-----\n"
/* */
/* Verysign */
"-----BEGIN CERTIFICATE-----\n"
"MIIE0zCCA7ugAwIBAgIQGNrRniZ96LtKIVjNzGs7SjANBgkqhkiG9w0BAQUFADCB\n"
"yjELMAkGA1UEBhMCVVMxFzAVBgNVBAoTDlZlcmlTaWduLCBJbmMuMR8wHQYDVQQL\n"
"ExZWZXJpU2lnbiBUcnVzdCBOZXR3b3JrMTowOAYDVQQLEzEoYykgMjAwNiBWZXJp\n"
"U2lnbiwgSW5jLiAtIEZvciBhdXRob3JpemVkIHVzZSBvbmx5MUUwQwYDVQQDEzxW\n"
"ZXJpU2lnbiBDbGFzcyAzIFB1YmxpYyBQcmltYXJ5IENlcnRpZmljYXRpb24gQXV0\n"
"aG9yaXR5IC0gRzUwHhcNMDYxMTA4MDAwMDAwWhcNMzYwNzE2MjM1OTU5WjCByjEL\n"
"MAkGA1UEBhMCVVMxFzAVBgNVBAoTDlZlcmlTaWduLCBJbmMuMR8wHQYDVQQLExZW\n"
"ZXJpU2lnbiBUcnVzdCBOZXR3b3JrMTowOAYDVQQLEzEoYykgMjAwNiBWZXJpU2ln\n"
"biwgSW5jLiAtIEZvciBhdXRob3JpemVkIHVzZSBvbmx5MUUwQwYDVQQDEzxWZXJp\n"
"U2lnbiBDbGFzcyAzIFB1YmxpYyBQcmltYXJ5IENlcnRpZmljYXRpb24gQXV0aG9y\n"
"aXR5IC0gRzUwggEiMA0GCSqGSIb3DQEBAQUAA4IBDwAwggEKAoIBAQCvJAgIKXo1\n"
"nmAMqudLO07cfLw8RRy7K+D+KQL5VwijZIUVJ/XxrcgxiV0i6CqqpkKzj/i5Vbex\n"
"t0uz/o9+B1fs70PbZmIVYc9gDaTY3vjgw2IIPVQT60nKWVSFJuUrjxuf6/WhkcIz\n"
"SdhDY2pSS9KP6HBRTdGJaXvHcPaz3BJ023tdS1bTlr8Vd6Gw9KIl8q8ckmcY5fQG\n"
"BO+QueQA5N06tRn/Arr0PO7gi+s3i+z016zy9vA9r911kTMZHRxAy3QkGSGT2RT+\n"
"rCpSx4/VBEnkjWNHiDxpg8v+R70rfk/Fla4OndTRQ8Bnc+MUCH7lP59zuDMKz10/\n"
"NIeWiu5T6CUVAgMBAAGjgbIwga8wDwYDVR0TAQH/BAUwAwEB/zAOBgNVHQ8BAf8E\n"
"BAMCAQYwbQYIKwYBBQUHAQwEYTBfoV2gWzBZMFcwVRYJaW1hZ2UvZ2lmMCEwHzAH\n"
"BgUrDgMCGgQUj+XTGoasjY5rw8+AatRIGCx7GS4wJRYjaHR0cDovL2xvZ28udmVy\n"
"aXNpZ24uY29tL3ZzbG9nby5naWYwHQYDVR0OBBYEFH/TZafC3ey78DAJ80M5+gKv\n"
"MzEzMA0GCSqGSIb3DQEBBQUAA4IBAQCTJEowX2LP2BqYLz3q3JktvXf2pXkiOOzE\n"
"p6B4Eq1iDkVwZMXnl2YtmAl+X6/WzChl8gGqCBpH3vn5fJJaCGkgDdk+bW48DW7Y\n"
"5gaRQBi5+MHt39tBquCWIMnNZBU4gcmU7qKEKQsTb47bDN0lAtukixlE0kF6BWlK\n"
"WE9gyn6CagsCqiUXObXbf+eEZSqVir2G3l6BFoMtEMze/aiCKm0oHw0LxOXnGiYZ\n"
"4fQRbxC1lfznQgUy286dUV4otp6F01vvpX1FQHKOtw5rDgb7MzVIcbidJ4vEZV8N\n"
"hnacRHr2lVz2XTIIM6RUthg/aFzyQkqFOFSDX9HoLPKsEdao7WNq\n"
"-----END CERTIFICATE-----\n"
/* */;

/*
 * (optional) Client certificate here in PEM format.
 * Set NULL if you don't use.
 * "-----BEGIN CERTIFICATE-----\n"
 * ...
 * "-----END CERTIFICATE-----\n";
 */
const char* SSL_CLIENT_CERT_PEM = 
"-----BEGIN CERTIFICATE-----\n"
"MIIDWTCCAkGgAwIBAgIUU44TvXE7cpBJnc8Bb4o0/fxtSwAwDQYJKoZIhvcNAQEL\n"
"BQAwTTFLMEkGA1UECwxCQW1hem9uIFdlYiBTZXJ2aWNlcyBPPUFtYXpvbi5jb20g\n"
"SW5jLiBMPVNlYXR0bGUgU1Q9V2FzaGluZ3RvbiBDPVVTMB4XDTIyMDQyMjIzMDUw\n"
"N1oXDTQ5MTIzMTIzNTk1OVowHjEcMBoGA1UEAwwTQVdTIElvVCBDZXJ0aWZpY2F0\n"
"ZTCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEBAKqXl+AYJbp+Xct+r0U9\n"
"bZVQO2WLYzKpqKWLjY03bdkjgcdTn5FNED9Nf/cpfhjEwET8ETHuLB/GC55mH9AL\n"
"WsTslnbbb06IoWItBR9sibHzbB+ydmZbStbETofIQlE5+LQGDwwLTAPnuD7ddA7r\n"
"VblFEQBaiFjiPQa5UCF31WCEjeOIs/iqqN7/FCVjovO0CATxGRC+YPnYNmNkDP8Q\n"
"9esdgYnO7MqAmK9yUL6rtO2jqJevTh5y3bJek/AtFQvx5MFuPpvLgYl8qSdZWqTu\n"
"wPNbIaTpZ6+OGc51XCoBYBBGBYHV9oTyGNi6Oh6o0m0kTajRwFpxQLG87FTfhbJO\n"
"dE0CAwEAAaNgMF4wHwYDVR0jBBgwFoAUJFzjJJ0tglkCKTIYeq5cIeruxUUwHQYD\n"
"VR0OBBYEFC91F/TklmEKSFCijGpeIDe/rFVGMAwGA1UdEwEB/wQCMAAwDgYDVR0P\n"
"AQH/BAQDAgeAMA0GCSqGSIb3DQEBCwUAA4IBAQAfwFZJSkAsMqzTd1PD1Ptjtdxp\n"
"gsy8S882iaKPPHuhcNVfC91DBrbGXQpI5iz7pHEVPSE39C2leIWcqcvbnNklcf+s\n"
"rK2RWnPwqq2xKt+EED1IKtRpXgNbjciYeU4vLxnhT677wfTCAstiV2YmPN0LSdAm\n"
"+81jUYtFDw0lE3X0MKHpH38YW9o5tH7Hu/ONiRtwuAokmZaOPgmcH2CBXLIctmQE\n"
"Jdldiom2/NlGE483Luc7xHjid+LIfxU9POgNBWyuEJ1r2OuDQso/17HLaI++GHrU\n"
"8KtfGUVU+3rxR/WtiZvCgB+fODef09k2G+wFIVPb4g6slZez844jdZAmD/jX\n"
"-----END CERTIFICATE-----\n"


/*
 * (optional) Client private key here in PEM format.
 * Set NULL if you don't use.
 * "-----BEGIN RSA PRIVATE KEY-----\n"
 * ...
 * "-----END RSA PRIVATE KEY-----\n";
 */
const char* SSL_CLIENT_PRIVATE_KEY_PEM = 
"-----BEGIN RSA PRIVATE KEY-----\n"
"MIIEpQIBAAKCAQEAqpeX4Bglun5dy36vRT1tlVA7ZYtjMqmopYuNjTdt2SOBx1Of\n"
"kU0QP01/9yl+GMTARPwRMe4sH8YLnmYf0AtaxOyWdttvToihYi0FH2yJsfNsH7J2\n"
"ZltK1sROh8hCUTn4tAYPDAtMA+e4Pt10DutVuUURAFqIWOI9BrlQIXfVYISN44iz\n"
"+Kqo3v8UJWOi87QIBPEZEL5g+dg2Y2QM/xD16x2Bic7syoCYr3JQvqu07aOol69O\n"
"HnLdsl6T8C0VC/HkwW4+m8uBiXypJ1lapO7A81shpOlnr44ZznVcKgFgEEYFgdX2\n"
"hPIY2Lo6HqjSbSRNqNHAWnFAsbzsVN+Fsk50TQIDAQABAoIBAQCb9p6O7eTIfTGp\n"
"k3gQuJmQclrreqVFs2ERgOX4Xt3aMKE9KFHxmOAqz+MXiGLVqEQUjdP2r0a+AeWr\n"
"erjJDyh8c8UYg4Re64GIbZqKYUP+YovO6u1epUZl1fHqKAehlXuwsv1cyJNF2rtT\n"
"Fko+PaARE3j4tsyDXsvmctQ01QdLBkb8jtvpuzWYMCEkk7Apy+TPFh3xQyIrvv1c\n"
"/hkckc0s8O9v5Kf8i54uaBSpOrsiWdAIlQwmos4zVKnKmJFX11jeP7QFe+hPn6cM\n"
"LSu3St81UBRPXGKraf8A6XbMdhmrtDog1/LIggNGF9EonVNusEVUU9PRjUUeDy0F\n"
"yEm2jITBAoGBANlcG7uPmKw+3Z+BhlmbGoJPoUsU1sTSRLuX4V52J2NoSzgX7JgL\n"
"Yf+QEcIjma1pGGvyMPzyGlEj6yBWWxUZfFoBvsrhrhyUquy/tjG/D58TDTIOaLnp\n"
"1HPBdHigV4ehVU1xFC1faQfV5QAtyi/Z1EjKKfLTgT03iHPXbLd99IgRAoGBAMjr\n"
"H2U6/ohKQvj66zu6MZOSpgz9damrVUiGHhnAlZ4Eptmqmz+qMJqb/Fs1p6UZPQRm\n"
"i5JerVJrPcMH/uejf7zTOcaM1IA0XY/Mw5flwyUSP+gHH/Oo5khPk6cwGz0z8wOb\n"
"zJNZQX5Aei5QORS/R1ZKKVEcwDWJqXHm4sMRC8R9AoGBAIe/kMpo+i7I7FzL5f5c\n"
"cgfkd5WOpDs0Hx0R0/zMyfi5kBCuUGL86O1VKuIWncnBkzEHhzTSd0Epr5T4mdXp\n"
"ntIPuPq4S6cp6j4F1WHoM3djzJ/wg9Noh/jrXzRe34ujZMUC1Fkp90yfd2/PKTEN\n"
"WBlFuUEgetyirCO87PcEQQ4hAoGBAMRBZxlq1tYqM+EguEZPSb3ssWZe7mAdi+Cb\n"
"oStmgr8nrBNSIvO9OlzLoWU2s9sBHCkAQbVn5cVsG5g2Zze87Tl02iqnxaq1e+7L\n"
"BQOK22OKwAHVc9B+WvKnSIM26mSOKgKMXPhRZzf7o10534f0j6oqJtGkU9v37Bvm\n"
"e/ou3F/BAoGALtZq4Itjg64DGC+rmBycbqSunuev8WdVqLu4sj4r+I68FAXcLl0c\n"
"PRv01ZqpY1do/64EHFHcAVj29eCU1ICWFVddjwpJUY3qLzOf/EOSBmKJ2BGhhtIe\n"
"kkuyf8DKzAblMcupxfcdbXjaVuDJz969rsVtbhju7Ob58BHXMpkYukM=\n"
"-----END RSA PRIVATE KEY-----\n"

#endif /* __MQTT_SERVER_SETTING_H__ */
