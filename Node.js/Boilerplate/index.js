const express = require('express');
const mongoose = require('mongoose');
const cors = require('cors');

const app = express();

app.use(cors());
app.use(express.json());

app.get('/', (req, res) => {
    res.status(200).send("Hello World!");
})

app.listen(process.env.PORT || 5000, async () => {
    try {
        mongoose.set('strictQuery', false);
        await mongoose.connect(process.env.MONGO_URL);
        console.log("MongoDB connected!");
        console.log(`App listening on http://localhost:5000:${process.env.PORT || 5000}`);
        
    } catch (error) {
        console.log(error)
    }
});