//a script that reads and prints the content of a file."""
#!/usr/bin/node
const fs = require('fs');
fs.writeFile(process.argv[2], process.argv[3], error => {
  if (error) console.log(error);
});
