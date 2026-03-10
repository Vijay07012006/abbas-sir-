const express = require('express')

const app = express();   // server ka instance create kar rahe hai

app.use(express.json()); // middleware to parse JSON data from request body

const notes = []; // array to store notes

// Note is added successfully
// api to add a note
app.post('/notes' ,(req ,res)=>{
    // console.log(req.body);

    // res.send('Note is added successfully');
    notes.push(req.body); // add the note to the array
    res.status(201).send('Note is added successfully'); // send response with status code 201 (Created)

});
// api to get all notes
// GET /notes => to get all notes 
app.get('/notes' ,(req ,res)=>{
    res.status(200).json({
        message: "Notes retrieved successfully",
        notes: notes 
    }); // send the array of notes as JSON response
});

// DELETE /notes/:index => to delete a note by index
app.delete('/notes/:index' ,(req ,res)=>{
    const index = req.params.index; // get the index from the URL parameter

    // if(index >= 0 && index < notes.length){ // check if the index is valid
    //     notes.splice(index, 1); // remove the note at the specified index
    //     res.status(200).send('Note is deleted successfully'); // send response with status code 200 (OK)
    // } else {
    //     res.status(404).send('Note not found'); // send response with status code 404 (Not Found) if index is invalid
    // }

    // OR 

    delete notes[index]; // delete the note at the specified index (this will leave an empty slot in the array)
    res.status(200).json({
        message: 'Note is deleted successfully'
    }); // send response with status code 200 (OK) 
});

app.patch('/notes/:index' ,(req ,res)=>{
    const index = req.params.index; // get the index from the URL parameter
    const description = req.body.description; // get the new description from the request body

    notes [index].description = description; // update the description of the note at the specified index   
    res.status(200).json({
        message: 'Note is updated successfully'
    }); // send response with status code 200 (OK) 
});

module.exports = app;