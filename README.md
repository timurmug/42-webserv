# webserv
42 project of HTTP server implementation project according to the documents RFC 7230-7235

### Config file 
The file can be passed as an argument to the program, or the default config will be used. In the this file, the user can configure the server: 
* ip
* port
* server name
* autoindex on/off
* error page
* root
* location - to configure specific uri
  * root
  * index
  * cgi path - to set the necessary environment variables, send the request body to the cgi script, receive and process the response
  * allow_methods - GET, HEAD, POST, PUT
  * limit_client_body_size
