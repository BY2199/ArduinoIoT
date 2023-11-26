// Fill in  your WiFi networks SSID and password
#define SECRET_SSID "Yeolikeng"
#define SECRET_PASS "739a1399"

// Fill in the hostname of your AWS IoT broker. This is the EndPoint, can find in AWS setting
#define SECRET_BROKER "a3osj6a3zqvi7a-ats.iot.us-east-1.amazonaws.com"

// Fill in the boards public certificate
//This is the Certicate ID. Download the ID and open with notepad. Copy content into here
const char SECRET_CERTIFICATE[] = R"(
-----BEGIN CERTIFICATE-----
MIICiTCCAXGgAwIBAgIVAIQ+7QurkOr+APjMdDubvXdsv6bkMA0GCSqGSIb3DQEB
CwUAME0xSzBJBgNVBAsMQkFtYXpvbiBXZWIgU2VydmljZXMgTz1BbWF6b24uY29t
IEluYy4gTD1TZWF0dGxlIFNUPVdhc2hpbmd0b24gQz1VUzAeFw0yMzExMjYwODE0
NTJaFw00OTEyMzEyMzU5NTlaMBgxFjAUBgNVBAMTDU15TUtSVmlyZ2luaWEwWTAT
BgcqhkjOPQIBBggqhkjOPQMBBwNCAAQ+etNqG9zhXqr1gGe9+40kO4SwOsu0OXaM
joooqQIhIhtlzfcyDeUQeaaucxy+j8xlrKWbT+v1clzwAyf7haIyo2AwXjAfBgNV
HSMEGDAWgBR0k3BI3pl4fO9O+gdItxbWLFyJ1jAdBgNVHQ4EFgQUgwJVXTzSEPL8
tAznEM0LDlUOxekwDAYDVR0TAQH/BAIwADAOBgNVHQ8BAf8EBAMCB4AwDQYJKoZI
hvcNAQELBQADggEBAEUmMfhEW3UhwQea77e1QtkMlQ963NQMQLAPx2IJVJAbEFHE
i4HAvhEelli35uJpPBBIm6fyd5DoBB1qTywHDmh07hzuHMQUE7tIls0Yu5LYpuJs
71g86Al8pdJUXVGYtbPtjxn8zTHa2sYlXNOTewwtbzbF3SQeivul5N+wA8g33mBA
5kkzsQGSUcy5V5XPsNaV3sfzQf4G4S3AHM4LtMGqvrpQeVM4oMAP5dBtP9lV1ud3
mIVDnHB8miWOo2ORvoko31a9uSw2Ccy2gMcWVHMIhD+8ry3TNYmp3sGU+GcZaZ6g
yr9f0OVGgPGwoY/3A2CC4ihmgREl6feEaDwYJD8=
-----END CERTIFICATE-----
)";
