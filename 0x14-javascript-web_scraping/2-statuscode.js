//a script that display the status code of a GET request.
#!/usr/bin/node
const request = require('request');
request.get(process.argv[2]).on('response', function (response) {
  console.log(`code: ${response.statusCode}`);
});
