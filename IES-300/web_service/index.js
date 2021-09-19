const express = require('express');

const route = express.Router();

route.get('/servidor_hora', (_, response) => {
  const now = new Date();

  return response.status(200).json({
    localeDate: now.toLocaleDateString(),
    localeTime: now.toLocaleTimeString(),
    timezoneOffset: now.getTimezoneOffset(),
    day: now.getDay(),
    month: now.getMonth(),
    year: now.getYear(),
  });
});

const app = express();
const port = 9876;

app.use(express.json());
app.use(route);

app.listen(port, () => console.log(`Server is running, port: ${ port }`));