const app = require('./src/app');
const connectDB = require('./src/db/db');


const startServer = async () => {
    try {
        // Connect to MongoDB
        await connectDB();

        app.listen(3000, () => {
            console.log('Server is running on port 3000');
        });
    } catch (error) {
        console.error('Error starting server:', error);
        process.exit(1); // Exit process with failure
    }
}

startServer();