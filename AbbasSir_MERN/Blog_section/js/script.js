let clearblog = document.querySelector('.clear-blog');
let saveblog = document.querySelector('.save-blog');
let updateblog = document.querySelector('.update-blog');
// LocalStorage se purana data lenge (array ke form me)
let blog_section_array = JSON.parse(localStorage.getItem('blog_section')) || [];

// HTML wali blog section div
let blog_section_div = document.querySelector('.blog_section');

let title = document.getElementById('title');
let category = document.getElementById('category');
let Tags = document.getElementById('Tags');
let ShortDescription = document.getElementById('Short-Description');
let content = document.getElementById('content');

let renderindex = -1;
// ye function cards ko screen par render karega
function renderBlogs() {
    blog_section_div.innerHTML = `
        <h2 class="text-center text-danger">Blog Section</h2>
        <div class="row p-4 mt-3">
    `;

    blog_section_array.forEach((item, index) => {
        renderindex = index;
        blog_section_div.innerHTML += `
        <div class="col-md-4 col-sm-12 mb-3">
            <div class="card h-100" style="width: 100%; height:100%;">
                <div class="card-body">
                    <p class="card-text"><strong>S.No: ${index + 1}</strong></p>
                    <h5 class="card-title text-danger">${item.title}</h5>       
                    <h6 class="card-subtitle text-muted">${item.category}</h6>
                    <p class="card-text">${item.ShortDescription} </p>
                    <p class="card-text"><small class="text-muted">Tags: ${item.Tags}</small></p>
                    <p class="card-text">${item.content}</p>
                    <div class = "row">
                        <div class="col-4 ">
                            <button class="btn btn-primary w-100 px-0 ">Read More</button>
                        </div>
                        <div class="col-4 ">
                            <button class="btn btn-secondary w-100 px-0 Edit " >Edit</button>
                        </div>
                        <div class="col-4 ">
                            <button class="btn btn-danger w-100 delete px-0" >Delete</button>
                        </div>   
                    </div>  
                </div>
            </div>
        </div>
        `;
    });

    blog_section_div.innerHTML += `</div>`;

    // delete button ki functionality

    let deleteButtons = document.querySelectorAll('.delete');
    deleteButtons.forEach((button, index) => {
        button.addEventListener('click', () => {
            const swalWithBootstrapButtons = Swal.mixin({
                customClass: {
                    confirmButton: "btn btn-success",
                    cancelButton: "btn btn-danger"
                },
                buttonsStyling: false
            });
            swalWithBootstrapButtons.fire({
                title: "Are you sure?",
                text: "You won't be able to revert this!",
                icon: "warning",
                showCancelButton: true,
                confirmButtonText: "Yes, delete it!",
                cancelButtonText: "No, cancel!",
                reverseButtons: true
            }).then((result) => {
                if (result.isConfirmed) {
                    blog_section_array.splice(index, 1);
                    localStorage.setItem('blog_section', JSON.stringify(blog_section_array));
                    renderBlogs();
                    swalWithBootstrapButtons.fire({
                        title: "Deleted!",
                        text: "Your file has been deleted.",
                        icon: "success"
                    });
                } else if (
                    /* Read more about handling dismissals below */
                    result.dismiss === Swal.DismissReason.cancel
                ) {
                    swalWithBootstrapButtons.fire({
                        title: "Cancelled",
                        text: "Your imaginary file is safe :)",
                        icon: "error"
                    });
                }
            });
        });
    });

    // edit button ki functionality
    let editButtons = document.querySelectorAll('.Edit');
    editButtons.forEach((button, index) => {
        button.addEventListener('click', () => {
            renderindex = index;

            let item = blog_section_array[index];
            title.value = item.title;
            category.value = item.category;
            Tags.value = item.Tags;
            ShortDescription.value = item.ShortDescription;
            content.value = item.content;

            let createBlog = document.querySelector('.CreateBlog');
            createBlog.click();

            saveblog.style.display = 'none';
            updateblog.style.display = 'block';
        });
    });
}

// page load hote hi pehle se saved blogs dikha dega ise karne se
renderBlogs();

saveblog.addEventListener('click', () => {
    let blogdata = {
        title: title.value,
        category: category.value,
        Tags: Tags.value,
        ShortDescription: ShortDescription.value,
        content: content.value
    };

    // array me add karna padega
    blog_section_array.push(blogdata);

    // localStorage me save karne ke liye stringify karna padta hai
    localStorage.setItem('blog_section', JSON.stringify(blog_section_array));

    alert('Blog Saved Successfully');

    // naya data render karega screen par
    renderBlogs();
});

clearblog.addEventListener('click', () => {
    title.value = '';
    category.value = '';
    Tags.value = '';
    ShortDescription.value = '';
    content.value = '';
});

updateblog.addEventListener('click', () => {
    if (renderindex !== -1) {
        blog_section_array[renderindex] = {
            title: title.value,
            category: category.value,
            Tags: Tags.value,
            ShortDescription: ShortDescription.value,
            content: content.value
        };
        localStorage.setItem('blog_section', JSON.stringify(blog_section_array));
        alert('Blog Updated Successfully');
        renderBlogs();
        title.value = '';
        category.value = '';
        Tags.value = '';
        ShortDescription.value = '';
        content.value = '';
        saveblog.style.display = 'block';
        updateblog.style.display = 'none';
    }
});
