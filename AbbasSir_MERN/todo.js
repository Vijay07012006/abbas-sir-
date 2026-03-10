
    // Get elements
    const form = document.getElementById('todo-form');
    const input = document.getElementById('todo-input');
    const list = document.getElementById('todo-list');
    const STORAGE_KEY = 'tasks';

    // Show tasks when page loads
    document.addEventListener('DOMContentLoaded', showTasks);

    // Add task
    form.addEventListener('submit', function(e) {
      e.preventDefault(); // form submission prevention
      const text = input.value.trim();
      if (!text) return;
      const tasks = JSON.parse(localStorage.getItem(STORAGE_KEY)) || [];
      tasks.push(text);
      localStorage.setItem(STORAGE_KEY, JSON.stringify(tasks));
      input.value = '';
      showTasks();
    });

    // Event delegation for delete buttons (works even for future items)
    list.addEventListener('click', function(e) {
      if (e.target && e.target.matches('button.delete-btn')) {
        const index = Number(e.target.getAttribute('data-index'));
        deleteTask(index);
      }
    });

    // Show tasks function (renders list)
    function showTasks() {
      const tasks = JSON.parse(localStorage.getItem(STORAGE_KEY)) || [];
      list.innerHTML = '';
      tasks.forEach((task, index) => {
        const li = document.createElement('li');
        li.className = 'list-group-item d-flex justify-content-between align-items-center';
        li.innerHTML = `
          <span>${escapeHtml(task)}</span>
          <button class="btn btn-sm btn-danger delete-btn" data-index="${index}">Delete</button>
        `;
        list.appendChild(li);
      });
    }

    // Delete task by index
    function deleteTask(i) {
      const tasks = JSON.parse(localStorage.getItem(STORAGE_KEY)) || [];
      if (i < 0 || i >= tasks.length) return;
      tasks.splice(i, 1);
      localStorage.setItem(STORAGE_KEY, JSON.stringify(tasks));
      showTasks();
    }   
    // Escape HTML to prevent XSS
    function escapeHtml(text) {
      const div = document.createElement('div');
      div.appendChild(document.createTextNode(text));
      return div.innerHTML;
    }